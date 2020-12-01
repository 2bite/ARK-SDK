#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GenericStructureSettings_NullType_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GenericStructureSettings_NullType.GenericStructureSettings_NullType_C
// 0x0000 (0x0050 - 0x0050)
class UGenericStructureSettings_NullType_C : public UPrimalStructureSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GenericStructureSettings_NullType.GenericStructureSettings_NullType_C");
		return ptr;
	}


	void ExecuteUbergraph_GenericStructureSettings_NullType(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
