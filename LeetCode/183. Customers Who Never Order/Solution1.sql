SELECT name AS Customers FROM Customers LEFT JOIN Orders ON Customers.id = Orders.customerId Where customerId is NULL;
