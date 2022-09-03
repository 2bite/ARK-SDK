#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RiddenAmarga_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_RiddenAmarga.Buff_RiddenAmarga_C
// 0x0000 (0x0978 - 0x0978)
class ABuff_RiddenAmarga_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RiddenAmarga.Buff_RiddenAmarga_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_RiddenAmarga(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
