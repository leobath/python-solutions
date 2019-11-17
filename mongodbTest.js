db.students.find({}, {_id: 0}).sort({major: 1, gpa: -1})
db.students.insertOne( { _id: 10, item: "box", qty: 20 }, { writeConcern: { w : "majority", wtimeout : 100 }} );