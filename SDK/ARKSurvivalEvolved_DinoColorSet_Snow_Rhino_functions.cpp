// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Snow_Rhino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Snow_Rhino.DinoColorSet_Snow_Rhino_C.ExecuteUbergraph_DinoColorSet_Snow_Rhino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Snow_Rhino_C::ExecuteUbergraph_DinoColorSet_Snow_Rhino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Snow_Rhino.DinoColorSet_Snow_Rhino_C.ExecuteUbergraph_DinoColorSet_Snow_Rhino");

	UDinoColorSet_Snow_Rhino_C_ExecuteUbergraph_DinoColorSet_Snow_Rhino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
