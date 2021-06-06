#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TribeMemberButton_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TribeMemberButton.TribeMemberButton_C
// 0x0008 (0x0560 - 0x0558)
class UTribeMemberButton_C : public UTribeMemberButtonWidget
{
public:
	class UCustomButtonWidget*                         Button;                                                   // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TribeMemberButton.TribeMemberButton_C");
		return ptr;
	}


	void ExecuteUbergraph_TribeMemberButton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
