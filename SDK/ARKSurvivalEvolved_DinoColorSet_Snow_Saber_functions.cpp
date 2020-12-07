// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Snow_Saber_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Snow_Saber.DinoColorSet_Snow_Saber_C.ExecuteUbergraph_DinoColorSet_Snow_Saber
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Snow_Saber_C::ExecuteUbergraph_DinoColorSet_Snow_Saber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Snow_Saber.DinoColorSet_Snow_Saber_C.ExecuteUbergraph_DinoColorSet_Snow_Saber");

	UDinoColorSet_Snow_Saber_C_ExecuteUbergraph_DinoColorSet_Snow_Saber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
