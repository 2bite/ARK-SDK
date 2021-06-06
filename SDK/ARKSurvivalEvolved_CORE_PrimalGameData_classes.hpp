#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CORE_PrimalGameData_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CORE_PrimalGameData.CORE_PrimalGameData_C
// 0x0020 (0x20A0 - 0x2080)
class UCORE_PrimalGameData_C : public UPrimalGameData
{
public:
	TArray<struct FHairMetaData>                       FemaleHairStylesMetaDatas;                                // 0x2080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FHairMetaData>                       MaleHairStylesMetaDatas;                                  // 0x2090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CORE_PrimalGameData.CORE_PrimalGameData_C");
		return ptr;
	}


	void ExecuteUbergraph_CORE_PrimalGameData(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
