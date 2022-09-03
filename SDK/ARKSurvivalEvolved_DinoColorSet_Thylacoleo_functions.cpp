// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Thylacoleo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Thylacoleo.DinoColorSet_Thylacoleo_C.ExecuteUbergraph_DinoColorSet_Thylacoleo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Thylacoleo_C::ExecuteUbergraph_DinoColorSet_Thylacoleo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Thylacoleo.DinoColorSet_Thylacoleo_C.ExecuteUbergraph_DinoColorSet_Thylacoleo");

	UDinoColorSet_Thylacoleo_C_ExecuteUbergraph_DinoColorSet_Thylacoleo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
