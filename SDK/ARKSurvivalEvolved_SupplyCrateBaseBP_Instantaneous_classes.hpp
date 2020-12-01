#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateBaseBP_Instantaneous_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrateBaseBP_Instantaneous.SupplyCrateBaseBP_Instantaneous_C
// 0x0010 (0x0E60 - 0x0E50)
class ASupplyCrateBaseBP_Instantaneous_C : public APrimalStructureItemContainer_SupplyCrate
{
public:
	class UAudioComponent*                             Audio1;                                                   // 0x0E50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrateBaseBP_Instantaneous.SupplyCrateBaseBP_Instantaneous_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SupplyCrateBaseBP_Instantaneous(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
