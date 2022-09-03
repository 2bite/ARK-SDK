// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Volcano_Rex_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Volcano_Rex.DinoColorSet_Volcano_Rex_C.ExecuteUbergraph_DinoColorSet_Volcano_Rex
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Volcano_Rex_C::ExecuteUbergraph_DinoColorSet_Volcano_Rex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Volcano_Rex.DinoColorSet_Volcano_Rex_C.ExecuteUbergraph_DinoColorSet_Volcano_Rex");

	UDinoColorSet_Volcano_Rex_C_ExecuteUbergraph_DinoColorSet_Volcano_Rex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
