#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SeaMine_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SeaMine.SeaMine_C
// 0x0008 (0x0B78 - 0x0B70)
class ASeaMine_C : public APrimalStructureSeaMine
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0B70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SeaMine.SeaMine_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SeaMine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
