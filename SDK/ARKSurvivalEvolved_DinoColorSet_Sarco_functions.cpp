// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Sarco_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Sarco.DinoColorSet_Sarco_C.ExecuteUbergraph_DinoColorSet_Sarco
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Sarco_C::ExecuteUbergraph_DinoColorSet_Sarco(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Sarco.DinoColorSet_Sarco_C.ExecuteUbergraph_DinoColorSet_Sarco");

	UDinoColorSet_Sarco_C_ExecuteUbergraph_DinoColorSet_Sarco_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
