#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Base_GasMaskable_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Base_GasMaskable.Buff_Base_GasMaskable_C
// 0x0000 (0x0950 - 0x0950)
class ABuff_Base_GasMaskable_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Base_GasMaskable.Buff_Base_GasMaskable_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Base_GasMaskable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
