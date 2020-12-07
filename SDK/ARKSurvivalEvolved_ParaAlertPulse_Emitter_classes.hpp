#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ParaAlertPulse_Emitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ParaAlertPulse_Emitter.ParaAlertPulse_Emitter_C
// 0x0014 (0x052C - 0x0518)
class AParaAlertPulse_Emitter_C : public APrimalEmitterSpawnable
{
public:
	float                                              CallFunc_Get_Alert_Radius_Radius;                         // 0x0518(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x051C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Conv_FloatToVector_ReturnValue;                  // 0x0520(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ParaAlertPulse_Emitter.ParaAlertPulse_Emitter_C");
		return ptr;
	}


	void Get_Alert_Radius(float* Radius);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ParaAlertPulse_Emitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
