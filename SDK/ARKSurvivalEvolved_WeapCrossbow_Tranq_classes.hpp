#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapCrossbow_Tranq_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapCrossbow_Tranq.WeapCrossbow_Tranq_C
// 0x0000 (0x0E58 - 0x0E58)
class AWeapCrossbow_Tranq_C : public AWeapCrossbow_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapCrossbow_Tranq.WeapCrossbow_Tranq_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapCrossbow_Tranq(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
