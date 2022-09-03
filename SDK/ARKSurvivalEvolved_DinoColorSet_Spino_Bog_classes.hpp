#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Spino_Bog_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_Spino_Bog.DinoColorSet_Spino_Bog_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_Spino_Bog_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Spino_Bog.DinoColorSet_Spino_Bog_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_Spino_Bog(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
