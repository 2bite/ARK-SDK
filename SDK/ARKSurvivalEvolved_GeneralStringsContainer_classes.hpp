#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GeneralStringsContainer_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GeneralStringsContainer.GeneralStringsContainer_C
// 0x0010 (0x0038 - 0x0028)
class UGeneralStringsContainer_C : public UObject
{
public:
	TArray<class FString>                              LocalizationStrings;                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GeneralStringsContainer.GeneralStringsContainer_C");
		return ptr;
	}


	void ExecuteUbergraph_GeneralStringsContainer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
