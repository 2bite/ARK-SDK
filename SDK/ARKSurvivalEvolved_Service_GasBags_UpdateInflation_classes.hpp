#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_GasBags_UpdateInflation_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Service_GasBags_UpdateInflation.Service_GasBags_UpdateInflation_C
// 0x0064 (0x00E4 - 0x0080)
class UService_GasBags_UpdateInflation_C : public UBTService_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      InflationKey;                                             // 0x0080(0x0028) (Edit, BlueprintVisible)
	class AActor*                                      K2Node_Event_OwnerActor;                                  // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x00B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	class AController*                                 K2Node_DynamicCast_AsController;                          // 0x00B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x00C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	class APawn*                                       CallFunc_K2_GetPawn_ReturnValue;                          // 0x00C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AGasBags_Character_BP_C*                     K2Node_DynamicCast_AsGasBags_Character_BP_C;              // 0x00D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x00D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	float                                              CallFunc_Get_Inflation_Value;                             // 0x00DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Get_Inflation_Percent;                           // 0x00E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Service_GasBags_UpdateInflation.Service_GasBags_UpdateInflation_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_Service_GasBags_UpdateInflation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
