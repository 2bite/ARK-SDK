#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Seek_Srv_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Seek_Srv.Seek_Srv_C
// 0x0011 (0x0091 - 0x0080)
class USeek_Srv_C : public UBTService_BlueprintBase
{
public:
	class AActor*                                      K2Node_Event_OwnerActor;                                  // 0x0080(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoAIController*                     K2Node_DynamicCast_AsPrimalDinoAIController;              // 0x0088(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0090(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Seek_Srv.Seek_Srv_C");
		return ptr;
	}


	void ReceiveActivation(class AActor** OwnerActor);
	void ExecuteUbergraph_Seek_Srv(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
