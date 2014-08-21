/** Very simple binding for hinge constraints.
 */
class btHingeConstraint : public btTypedConstraint {
public:
  btHingeConstraint( btRigidBody& rbA,
      const btTransform& rbAFrame,
      bool useReferenceFrameA = false);

  btHingeConstraint(btRigidBody& rbA,
      const btVector3& pivotInA,
      btVector3& axisInA,
      bool useReferenceFrameA = false);

  btHingeConstraint(btRigidBody& rbA,
      btRigidBody& rbB,
      const btVector3& pivotInA,
      const btVector3& pivotInB,
      btVector3& axisInA,
      btVector3& axisInB,
      bool useReferenceFrameA = false);

  btHingeConstraint(btRigidBody& rbA,
      btRigidBody& rbB,
      const btTransform& rbAFrame,
      const btTransform& rbBFrame,
      bool useReferenceFrameA = false);

  void setLimit(btScalar low,
      btScalar high,
      btScalar _softness = 0.9f,
      btScalar _biasFactor = 0.3f,
      btScalar _relaxationFactor = 1.0f);

  void enableAngularMotor(bool enableMotor,btScalar targetVelocity,btScalar maxMotorImpulse);
  void enableAngularMotor(bool enableMotor,btScalar targetVelocity,btScalar maxMotorImpulse);
  void setMotorTarget(btScalar targetAngle,btScalar dt);
  
  void enableMotor(bool isEnableMotor);
  void setMaxMotorImpulse(btScalar maxMotorImpulse);
};
