#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Zipline_ZiplineFaceTarget_TK_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Zipline_ZiplineFaceTarget_TK.Zipline_ZiplineFaceTarget_TK_C
// 0x0008 (0x0080 - 0x0078)
class UZipline_ZiplineFaceTarget_TK_C : public UBTTask_BlueprintBase
{
public:
	class UActorComponent*                             ZiplineComponent;                                         // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Zipline_ZiplineFaceTarget_TK.Zipline_ZiplineFaceTarget_TK_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Zipline_ZiplineFaceTarget_TK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
