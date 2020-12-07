#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Leedsichthys_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Leedsichthys.DinoEntry_Leedsichthys_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Leedsichthys_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Leedsichthys.DinoEntry_Leedsichthys_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Leedsichthys(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
