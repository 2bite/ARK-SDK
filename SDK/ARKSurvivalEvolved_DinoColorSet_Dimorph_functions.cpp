// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Dimorph_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Dimorph.DinoColorSet_Dimorph_C.ExecuteUbergraph_DinoColorSet_Dimorph
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Dimorph_C::ExecuteUbergraph_DinoColorSet_Dimorph(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Dimorph.DinoColorSet_Dimorph_C.ExecuteUbergraph_DinoColorSet_Dimorph");

	UDinoColorSet_Dimorph_C_ExecuteUbergraph_DinoColorSet_Dimorph_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
