// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoHUDStatusBarsWidget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoHUDStatusBarsWidget.DinoHUDStatusBarsWidget_C.ExecuteUbergraph_DinoHUDStatusBarsWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoHUDStatusBarsWidget_C::ExecuteUbergraph_DinoHUDStatusBarsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoHUDStatusBarsWidget.DinoHUDStatusBarsWidget_C.ExecuteUbergraph_DinoHUDStatusBarsWidget");

	UDinoHUDStatusBarsWidget_C_ExecuteUbergraph_DinoHUDStatusBarsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
