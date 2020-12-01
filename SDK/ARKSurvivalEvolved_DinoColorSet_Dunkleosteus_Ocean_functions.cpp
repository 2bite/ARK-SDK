// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Dunkleosteus_Ocean_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Dunkleosteus_Ocean.DinoColorSet_Dunkleosteus_Ocean_C.ExecuteUbergraph_DinoColorSet_Dunkleosteus_Ocean
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Dunkleosteus_Ocean_C::ExecuteUbergraph_DinoColorSet_Dunkleosteus_Ocean(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Dunkleosteus_Ocean.DinoColorSet_Dunkleosteus_Ocean_C.ExecuteUbergraph_DinoColorSet_Dunkleosteus_Ocean");

	UDinoColorSet_Dunkleosteus_Ocean_C_ExecuteUbergraph_DinoColorSet_Dunkleosteus_Ocean_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
