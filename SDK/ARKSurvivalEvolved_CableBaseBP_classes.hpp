#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CableBaseBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CableBaseBP.CableBaseBP_C
// 0x0008 (0x0B08 - 0x0B00)
class ACableBaseBP_C : public APrimalStructureWaterPipe
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0B00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CableBaseBP.CableBaseBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_CableBaseBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
