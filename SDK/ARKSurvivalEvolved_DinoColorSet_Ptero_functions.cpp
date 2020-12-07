// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Ptero_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Ptero.DinoColorSet_Ptero_C.ExecuteUbergraph_DinoColorSet_Ptero
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Ptero_C::ExecuteUbergraph_DinoColorSet_Ptero(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Ptero.DinoColorSet_Ptero_C.ExecuteUbergraph_DinoColorSet_Ptero");

	UDinoColorSet_Ptero_C_ExecuteUbergraph_DinoColorSet_Ptero_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
