// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Quetz_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Quetz.DinoEntry_Quetz_C.ExecuteUbergraph_DinoEntry_Quetz
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Quetz_C::ExecuteUbergraph_DinoEntry_Quetz(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Quetz.DinoEntry_Quetz_C.ExecuteUbergraph_DinoEntry_Quetz");

	UDinoEntry_Quetz_C_ExecuteUbergraph_DinoEntry_Quetz_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
