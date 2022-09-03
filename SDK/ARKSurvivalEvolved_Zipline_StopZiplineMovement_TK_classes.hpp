#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Zipline_StopZiplineMovement_TK_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Zipline_StopZiplineMovement_TK.Zipline_StopZiplineMovement_TK_C
// 0x0000 (0x0078 - 0x0078)
class UZipline_StopZiplineMovement_TK_C : public UBTTask_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Zipline_StopZiplineMovement_TK.Zipline_StopZiplineMovement_TK_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Zipline_StopZiplineMovement_TK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
