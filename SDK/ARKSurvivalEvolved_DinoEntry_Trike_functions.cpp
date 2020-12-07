// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Trike_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Trike.DinoEntry_Trike_C.ExecuteUbergraph_DinoEntry_Trike
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Trike_C::ExecuteUbergraph_DinoEntry_Trike(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Trike.DinoEntry_Trike_C.ExecuteUbergraph_DinoEntry_Trike");

	UDinoEntry_Trike_C_ExecuteUbergraph_DinoEntry_Trike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
