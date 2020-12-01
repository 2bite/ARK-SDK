// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ArgentAnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArgentAnimBlueprint.ArgentAnimBlueprint_C.ExecuteUbergraph_ArgentAnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UArgentAnimBlueprint_C::ExecuteUbergraph_ArgentAnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArgentAnimBlueprint.ArgentAnimBlueprint_C.ExecuteUbergraph_ArgentAnimBlueprint");

	UArgentAnimBlueprint_C_ExecuteUbergraph_ArgentAnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
