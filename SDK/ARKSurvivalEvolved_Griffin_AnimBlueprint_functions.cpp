// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Griffin_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Griffin_AnimBlueprint.Griffin_AnimBlueprint_C.ExecuteUbergraph_Griffin_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGriffin_AnimBlueprint_C::ExecuteUbergraph_Griffin_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Griffin_AnimBlueprint.Griffin_AnimBlueprint_C.ExecuteUbergraph_Griffin_AnimBlueprint");

	UGriffin_AnimBlueprint_C_ExecuteUbergraph_Griffin_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
