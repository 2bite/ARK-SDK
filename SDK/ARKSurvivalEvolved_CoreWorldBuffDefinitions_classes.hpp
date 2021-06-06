#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CoreWorldBuffDefinitions_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CoreWorldBuffDefinitions.CoreWorldBuffDefinitions_C
// 0x0000 (0x0048 - 0x0048)
class UCoreWorldBuffDefinitions_C : public UPrimalWorldBuffData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CoreWorldBuffDefinitions.CoreWorldBuffDefinitions_C");
		return ptr;
	}


	void ExecuteUbergraph_CoreWorldBuffDefinitions(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
