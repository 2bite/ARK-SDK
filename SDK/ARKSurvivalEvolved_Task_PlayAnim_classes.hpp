#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_PlayAnim_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Task_PlayAnim.Task_PlayAnim_C
// 0x0040 (0x00B8 - 0x0078)
class UTask_PlayAnim_C : public UBTTask_BlueprintBase
{
public:
	class UAnimMontage*                                AnimMontage;                                              // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      K2Node_Event_OwnerActor;                                  // 0x0080(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoAIController*                     K2Node_DynamicCast_AsPrimalDinoAIController;              // 0x0088(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0090(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	class APawn*                                       CallFunc_GetControllerPawn_ReturnValue;                   // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x00A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x00AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                CallFunc_GetCurrentMontage_ReturnValue;                   // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_PlayAnim.Task_PlayAnim_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Task_PlayAnim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
