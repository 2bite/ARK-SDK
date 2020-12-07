// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Thanksgiving_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Thanksgiving.DinoColorSet_Thanksgiving_C.ExecuteUbergraph_DinoColorSet_Thanksgiving
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Thanksgiving_C::ExecuteUbergraph_DinoColorSet_Thanksgiving(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Thanksgiving.DinoColorSet_Thanksgiving_C.ExecuteUbergraph_DinoColorSet_Thanksgiving");

	UDinoColorSet_Thanksgiving_C_ExecuteUbergraph_DinoColorSet_Thanksgiving_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
