// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_GasBags_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_GasBags.DinoColorSet_GasBags_C.ExecuteUbergraph_DinoColorSet_GasBags
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_GasBags_C::ExecuteUbergraph_DinoColorSet_GasBags(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_GasBags.DinoColorSet_GasBags_C.ExecuteUbergraph_DinoColorSet_GasBags");

	UDinoColorSet_GasBags_C_ExecuteUbergraph_DinoColorSet_GasBags_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
