#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ZiplineComponent_Dinopithecus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ZiplineComponent_Dinopithecus.ZiplineComponent_Dinopithecus_C
// 0x0000 (0x05C0 - 0x05C0)
class UZiplineComponent_Dinopithecus_C : public UZiplineComponent_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ZiplineComponent_Dinopithecus.ZiplineComponent_Dinopithecus_C");
		return ptr;
	}


	void ExecuteUbergraph_ZiplineComponent_Dinopithecus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
