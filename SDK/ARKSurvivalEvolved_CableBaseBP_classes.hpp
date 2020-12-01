#pragma once

// ARKSurvivalEvolved (301.1) SDK

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
// 0x0008 (0x0AC0 - 0x0AB8)
class ACableBaseBP_C : public APrimalStructureWaterPipe
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
