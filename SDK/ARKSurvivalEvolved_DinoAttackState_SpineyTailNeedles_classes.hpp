#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_SpineyTailNeedles_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C
// 0x0000 (0x00A8 - 0x00A8)
class UDinoAttackState_SpineyTailNeedles_C : public UPrimalAIStateDinoSpineyLizardTailRangeState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C");
		return ptr;
	}


	void GetGravityBias(const struct FVector& Velocity, const struct FVector& StartLocation, const struct FVector& TargetLocation, float* Z_Bias);
	void Get_Socket_Location(const struct FName& SocketName, float Offset, struct FVector* Location);
	void OffsetVectorRandomly(const struct FVector& VectorIn, struct FVector* newVector);
	void ExecuteUbergraph_DinoAttackState_SpineyTailNeedles(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
