
(cl:in-package :asdf)

(defsystem "image_adaptor-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :sensor_msgs-msg
               :stereo_msgs-msg
)
  :components ((:file "_package")
    (:file "disparityImage" :depends-on ("_package_disparityImage"))
    (:file "_package_disparityImage" :depends-on ("_package"))
    (:file "setBoolean" :depends-on ("_package_setBoolean"))
    (:file "_package_setBoolean" :depends-on ("_package"))
    (:file "setString" :depends-on ("_package_setString"))
    (:file "_package_setString" :depends-on ("_package"))
    (:file "setInteger" :depends-on ("_package_setInteger"))
    (:file "_package_setInteger" :depends-on ("_package"))
    (:file "floatValue" :depends-on ("_package_floatValue"))
    (:file "_package_floatValue" :depends-on ("_package"))
    (:file "setFloat" :depends-on ("_package_setFloat"))
    (:file "_package_setFloat" :depends-on ("_package"))
    (:file "stringValue" :depends-on ("_package_stringValue"))
    (:file "_package_stringValue" :depends-on ("_package"))
    (:file "intValue" :depends-on ("_package_intValue"))
    (:file "_package_intValue" :depends-on ("_package"))
    (:file "booleanValue" :depends-on ("_package_booleanValue"))
    (:file "_package_booleanValue" :depends-on ("_package"))
    (:file "normalImage" :depends-on ("_package_normalImage"))
    (:file "_package_normalImage" :depends-on ("_package"))
  ))