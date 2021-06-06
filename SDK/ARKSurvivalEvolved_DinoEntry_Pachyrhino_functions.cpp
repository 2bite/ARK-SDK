// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Pachyrhino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Pachyrhino.DinoEntry_Pachyrhino_C.ExecuteUbergraph_DinoEntry_Pachyrhino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Pachyrhino_C::ExecuteUbergraph_DinoEntry_Pachyrhino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Pachyrhino.DinoEntry_Pachyrhino_C.ExecuteUbergraph_DinoEntry_Pachyrhino");

	UDinoEntry_Pachyrhino_C_ExecuteUbergraph_DinoEntry_Pachyrhino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
