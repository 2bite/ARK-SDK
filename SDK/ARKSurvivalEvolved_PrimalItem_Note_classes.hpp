#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Note_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_Note.PrimalItem_Note_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItem_Note_C : public UPrimalItem_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_Note.PrimalItem_Note_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_Note(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
