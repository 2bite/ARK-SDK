// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Piranha_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Piranha.DinoEntry_Piranha_C.ExecuteUbergraph_DinoEntry_Piranha
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Piranha_C::ExecuteUbergraph_DinoEntry_Piranha(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Piranha.DinoEntry_Piranha_C.ExecuteUbergraph_DinoEntry_Piranha");

	UDinoEntry_Piranha_C_ExecuteUbergraph_DinoEntry_Piranha_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
