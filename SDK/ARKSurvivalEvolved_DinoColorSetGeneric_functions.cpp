// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSetGeneric_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSetGeneric.DinoColorSetGeneric_C.ExecuteUbergraph_DinoColorSetGeneric
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSetGeneric_C::ExecuteUbergraph_DinoColorSetGeneric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSetGeneric.DinoColorSetGeneric_C.ExecuteUbergraph_DinoColorSetGeneric");

	UDinoColorSetGeneric_C_ExecuteUbergraph_DinoColorSetGeneric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
