// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Coel_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Coel.DinoEntry_Coel_C.ExecuteUbergraph_DinoEntry_Coel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Coel_C::ExecuteUbergraph_DinoEntry_Coel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Coel.DinoEntry_Coel_C.ExecuteUbergraph_DinoEntry_Coel");

	UDinoEntry_Coel_C_ExecuteUbergraph_DinoEntry_Coel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
