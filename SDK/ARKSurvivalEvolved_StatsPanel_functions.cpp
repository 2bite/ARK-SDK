// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StatsPanel_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StatsPanel.StatsPanel_C.ExecuteUbergraph_StatsPanel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatsPanel_C::ExecuteUbergraph_StatsPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsPanel.StatsPanel_C.ExecuteUbergraph_StatsPanel");

	UStatsPanel_C_ExecuteUbergraph_StatsPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
