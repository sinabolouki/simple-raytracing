//
// Created by Sina on 6/25/2023.
//

#ifndef UNTITLED_SPHERE_H
#define UNTITLED_SPHERE_H

#include "hittable.h"
#include "vec3.h"

class sphere : public hittable{
public:
    sphere(){}
    sphere(point3 cen, double r, shared_ptr<material> m) : center(cen), radius(r), mat_ptr(m) {};

    virtual bool hit(
            const ray& r, double t_min, double t_max, hit_record& rec) const override;

public:
    point3 center;
    double radius;
    shared_ptr<material> mat_ptr;
};

bool sphere::hit(const ray& r, double t_min, double t_max, hit_record& rec) const {
    vec3 oc = r.origin() - center;
    auto a = r.direction().length_squared();
    auto b_prime =  dot(r.direction(), oc);
    auto c = oc.length_squared() - radius * radius;
    auto delta = b_prime * b_prime - a * c;
    if (delta < 0) return false;
    auto sqrtd = sqrt(delta);

    auto root = (-b_prime - sqrtd) / a;
    if (root < t_min || t_max < root) {
        root = (-b_prime + sqrtd) / a;
        if (root < t_min || t_max < root)
            return false;
    }

    rec.t = root;
    rec.p = r.at(rec.t);
    vec3 outward_normal = (rec.p -center) / radius;
    rec.set_face_normal(r, outward_normal);
    rec.mat_ptr = mat_ptr;

    return true;
}

#endif //UNTITLED_SPHERE_H
