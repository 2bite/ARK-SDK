// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CharacterStatsPanel_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharacterStatsPanel.CharacterStatsPanel_C.ExecuteUbergraph_CharacterStatsPanel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterStatsPanel_C::ExecuteUbergraph_CharacterStatsPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterStatsPanel.CharacterStatsPanel_C.ExecuteUbergraph_CharacterStatsPanel");

	UCharacterStatsPanel_C_ExecuteUbergraph_CharacterStatsPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
