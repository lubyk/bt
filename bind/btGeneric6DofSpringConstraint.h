/** Very simple binding for spring constraints.
 */
class btGeneric6DofSpringConstraint : public btTypedConstraint {
public:
  btGeneric6DofSpringConstraint(btRigidBody &rbA,
      btRigidBody &rbB,
      const btTransform &frameInA,
      const btTransform &frameInB,
      bool useLinearReferenceFrameA);

  btGeneric6DofSpringConstraint(btRigidBody &rbB,
      const btTransform &frameInB,
      bool useLinearReferenceFrameB);

  // Spring
  void enableSpring(int index, bool onOff);
  void setStiffness(int index, btScalar stiffness);
  void setDamping(int index, btScalar damping);

  // generic 6Dof
  void setLinearLowerLimit(const btVector3 &linearLower);
  void setLinearUpperLimit(const btVector3 &linearUpper);
  void setAngularLowerLimit(const btVector3 &angularLower);
  void setAngularUpperLimit(const btVector3 &angularUpper);    
};

