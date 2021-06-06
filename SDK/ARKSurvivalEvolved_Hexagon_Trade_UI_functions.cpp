// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Hexagon_Trade_UI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Hexagon_Trade_UI.Hexagon_Trade_UI_C.ExecuteUbergraph_Hexagon_Trade_UI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHexagon_Trade_UI_C::ExecuteUbergraph_Hexagon_Trade_UI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hexagon_Trade_UI.Hexagon_Trade_UI_C.ExecuteUbergraph_Hexagon_Trade_UI");

	UHexagon_Trade_UI_C_ExecuteUbergraph_Hexagon_Trade_UI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
