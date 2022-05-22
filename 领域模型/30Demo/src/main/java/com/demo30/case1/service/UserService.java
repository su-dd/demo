package com.demo30.case1.service;

import com.demo30.case1.entity.User;
import com.demo30.case1.vo.Name;
import com.demo30.case1.vo.PhoneNumber;

import javax.xml.bind.ValidationException;

public interface UserService {
    public User register(Name name, PhoneNumber phone) throws ValidationException;
}
