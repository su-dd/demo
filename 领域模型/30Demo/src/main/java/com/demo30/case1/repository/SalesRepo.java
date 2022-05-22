package com.demo30.case1.repository;

import com.demo30.case1.entity.Sales;
import com.demo30.case1.vo.PhoneNumber;

public interface SalesRepo {
    Sales find(PhoneNumber phone);
}
