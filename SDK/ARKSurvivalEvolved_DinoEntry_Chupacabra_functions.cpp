// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Chupacabra_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Chupacabra.DinoEntry_Chupacabra_C.ExecuteUbergraph_DinoEntry_Chupacabra
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Chupacabra_C::ExecuteUbergraph_DinoEntry_Chupacabra(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Chupacabra.DinoEntry_Chupacabra_C.ExecuteUbergraph_DinoEntry_Chupacabra");

	UDinoEntry_Chupacabra_C_ExecuteUbergraph_DinoEntry_Chupacabra_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
